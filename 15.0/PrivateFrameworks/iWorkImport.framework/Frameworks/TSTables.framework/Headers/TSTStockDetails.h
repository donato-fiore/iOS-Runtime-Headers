// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTOCKDETAILS_H
#define TSTSTOCKDETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSTStockDetails : NSObject

@property (nonatomic) NSInteger attribute; // ivar: _attribute
@property (retain, nonatomic) NSString *symbol; // ivar: _symbol


+(id)detailsWithSymbol:(id)arg0 attribute:(NSInteger)arg1 ;
-(BOOL)isEqualToStockDetails:(id)arg0 ;
-(id)initWithSymbol:(id)arg0 attribute:(NSInteger)arg1 ;


@end


#endif