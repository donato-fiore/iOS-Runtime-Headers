// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLABELBITMAPCONTEXTINFO_H
#define TSCH3DLABELBITMAPCONTEXTINFO_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL hasSuppressedBackgrounds; // ivar: _hasSuppressedBackgrounds
@property (readonly, nonatomic) BOOL isPDF; // ivar: _isPDF
@property (readonly, nonatomic) BOOL isPrinting; // ivar: _isPrinting


+(id)context;
+(id)contextInfoForScene:(id)arg0 ;
+(id)contextInfoWithIsPrinting:(BOOL)arg0 isPDF:(BOOL)arg1 hasSuppressedBackgrounds:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIsPrinting:(BOOL)arg0 isPDF:(BOOL)arg1 hasSuppressedBackgrounds:(BOOL)arg2 ;
-(void)setTSDCGContextInfoForCGContext:(struct CGContext *)arg0 ;


@end


#endif