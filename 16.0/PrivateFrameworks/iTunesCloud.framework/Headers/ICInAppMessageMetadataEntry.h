// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINAPPMESSAGEMETADATAENTRY_H
#define ICINAPPMESSAGEMETADATAENTRY_H

@class NSMutableDictionary;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_metadataValues;
    NSObject<OS_dispatch_queue> *_accessQueue;
}




+(BOOL)supportsSecureCoding;
-(id)allMetadataValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)metadataValueForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif