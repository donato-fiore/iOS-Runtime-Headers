// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDLAYOUTMETRICSCHANNEL_H
#define CUIPSDLAYOUTMETRICSCHANNEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUIPSDLayoutMetricsChannel : NSObject

@property (readonly, nonatomic) CGRect edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)initWithEdgeInsets:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)sanitizeEdgeInsets;


@end


#endif