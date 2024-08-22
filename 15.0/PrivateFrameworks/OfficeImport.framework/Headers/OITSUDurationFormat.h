// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUDURATIONFORMAT_H
#define OITSUDURATIONFORMAT_H

@class NSString;
@protocol NSCopying, TSUDataFormat;

#import <Foundation/Foundation.h>


@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat>

 {
    NSString *mFormat;
    NSString *mName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)formatWithFormat:(id)arg0 name:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)format;
-(id)formatName;
-(id)initWithFormat:(id)arg0 name:(id)arg1 ;
-(void)dealloc;
-(void)setFormatName:(id)arg0 ;


@end


#endif