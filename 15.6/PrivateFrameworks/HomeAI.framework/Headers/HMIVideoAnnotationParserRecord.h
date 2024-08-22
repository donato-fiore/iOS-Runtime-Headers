// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANNOTATIONPARSERRECORD_H
#define HMIVIDEOANNOTATIONPARSERRECORD_H


#import <Foundation/Foundation.h>


@interface HMIVideoAnnotationParserRecord : NSObject

@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) CGFloat timeStamp; // ivar: _timeStamp


-(id)initWithBoundingBox:(struct CGRect )arg0 timeStamp:(CGFloat)arg1 ;


@end


#endif