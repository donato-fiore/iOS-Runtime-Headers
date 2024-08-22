// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMBRAILLEEDGEDETECTOROPTIONS_H
#define AXMBRAILLEEDGEDETECTOROPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMBrailleCanvasDescription.h"

@interface AXMBrailleEdgeDetectorOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) AXMBrailleCanvasDescription *canvasDescription; // ivar: _canvasDescription
@property (nonatomic) CGFloat edgeStrength; // ivar: _edgeStrength
@property (nonatomic) BOOL invert; // ivar: _invert
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (nonatomic) CGFloat zoomLevel; // ivar: _zoomLevel


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCanvasDescription:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif