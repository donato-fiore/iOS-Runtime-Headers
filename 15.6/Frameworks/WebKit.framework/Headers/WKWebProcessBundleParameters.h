// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWEBPROCESSBUNDLEPARAMETERS_H
#define WKWEBPROCESSBUNDLEPARAMETERS_H


#import <Foundation/Foundation.h>


@interface WKWebProcessBundleParameters : NSObject {
    RetainPtr<NSMutableDictionary> _parameters;
}




-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)setParameter:(id)arg0 forKey:(id)arg1 ;
-(void)setParametersForKeyWithDictionary:(id)arg0 ;


@end


#endif