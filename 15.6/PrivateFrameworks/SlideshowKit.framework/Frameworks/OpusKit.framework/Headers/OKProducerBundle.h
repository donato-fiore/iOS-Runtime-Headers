// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPRODUCERBUNDLE_H
#define OKPRODUCERBUNDLE_H

@class NSURL, NSBundle, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface OKProducerBundle : NSObject {
    NSURL *_url;
    NSBundle *_bundle;
    NSDictionary *_infoDictionary;
}


@property (retain, nonatomic) NSString *bundleExtension; // ivar: _bundleExtension
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(CGFloat)version;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 ;
-(id)bundle;
-(id)identifier;
-(id)infoDictionary;
-(id)init;
-(id)initWithURL:(id)arg0 bundleType:(NSUInteger)arg1 ;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)url;
-(void)dealloc;


@end


#endif