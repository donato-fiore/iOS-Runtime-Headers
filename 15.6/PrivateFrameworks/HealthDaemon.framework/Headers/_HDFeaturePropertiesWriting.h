// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDFEATUREPROPERTIESWRITING_H
#define _HDFEATUREPROPERTIESWRITING_H

@class NSString, NSUserDefaults;
@protocol HDFeaturePropertiesWriting;

#import <Foundation/Foundation.h>


@interface _HDFeaturePropertiesWriting : NSObject <HDFeaturePropertiesWriting>

 {
    NSString *_localDomain;
    NSUserDefaults *_userDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLocalDomain:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)synchronize;


@end


#endif