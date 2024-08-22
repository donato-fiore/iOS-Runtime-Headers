// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANNOTATIONPARSER_H
#define HMIVIDEOANNOTATIONPARSER_H

@class HMFObject, NSArray;



@interface HMIVideoAnnotationParser : HMFObject

@property (readonly) ? lastKnownTimeStamp;
@property (readonly) NSArray *tracks; // ivar: _tracks


+(id)eventForClass:(Class)arg0 boundingBox:(struct CGRect )arg1 UUID:(id)arg2 ;
-(id)eventsForFragment;
-(id)eventsForTimeStamp:(struct ? )arg0 ;
-(id)initWithArray:(id)arg0 ;


@end


#endif