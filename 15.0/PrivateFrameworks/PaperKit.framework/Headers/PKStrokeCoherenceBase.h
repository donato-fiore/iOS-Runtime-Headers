// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKECOHERENCEBASE_H
#define PKSTROKECOHERENCEBASE_H

@class PKStroke;



@interface PKStrokeCoherenceBase : PKStroke {
    ? strokeNode;
    ? identity;
}




-(id)_newStrokeWithSubstrokes:(id)arg0 inDrawing:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg0 id:(id)arg1 flags:(struct ? )arg2 ink:(id)arg3 transform:(struct CGAffineTransform )arg4 substrokes:(id)arg5 ;
-(id)initWithInk:(id)arg0 strokePath:(id)arg1 transform:(struct CGAffineTransform )arg2 mask:(id)arg3 ;


@end


#endif