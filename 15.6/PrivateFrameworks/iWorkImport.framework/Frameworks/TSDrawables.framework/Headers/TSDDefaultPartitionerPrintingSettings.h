// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDDEFAULTPARTITIONERPRINTINGSETTINGS_H
#define TSDDEFAULTPARTITIONERPRINTINGSETTINGS_H


#import <Foundation/Foundation.h>


@interface TSDDefaultPartitionerPrintingSettings : NSObject

@property (readonly, nonatomic) BOOL isDrawingIntoPDF; // ivar: _isDrawingIntoPDF
@property (readonly, nonatomic) BOOL isPrinting; // ivar: _isPrinting
@property (readonly, nonatomic) BOOL shouldSuppressBackgrounds; // ivar: _shouldSuppressBackgrounds


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCanvas:(id)arg0 ;


@end


#endif