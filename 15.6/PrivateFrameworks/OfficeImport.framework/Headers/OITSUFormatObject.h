// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSUFORMATOBJECT_H
#define OITSUFORMATOBJECT_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface OITSUFormatObject : NSObject <NSCopying, NSMutableCopying>

 {
    ? mFormatStruct;
}


@property (readonly, nonatomic) ? formatStruct;
@property (readonly, nonatomic) BOOL useExpandedContents; // ivar: mUseExpandedContents


+(id)defaultDateFormat:(id)arg0 ;
+(id)defaultDurationFormat;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTSUFormatFormatStruct:(struct ? )arg0 ;
-(id)initWithTSUFormatFormatStruct:(struct ? )arg0 useExpandedContents:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif