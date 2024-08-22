// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIHTMLREPORTBOX_H
#define HMIHTMLREPORTBOX_H

@class HMFObject, NSString;



@interface HMIHTMLReportBox : HMFObject

@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) NSString *color; // ivar: _color
@property (readonly) float opacity; // ivar: _opacity
@property (readonly) NSString *text; // ivar: _text
@property (readonly) float value; // ivar: _value


-(id)initWithBoundingBox:(struct CGRect )arg0 text:(id)arg1 color:(id)arg2 opacity:(float)arg3 value:(float)arg4 ;


@end


#endif