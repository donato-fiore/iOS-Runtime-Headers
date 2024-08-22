// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOMIRROREDPROGRESS_H
#define _GEOMIRROREDPROGRESS_H

@class NSProgress;



@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}




-(id)_initWithMirroredProgressForSubclasses:(id)arg0 ;
-(id)initWithMirroredProgress:(id)arg0 ;
-(void)_registerForKVO;
-(void)_replaceObservedProgressWith:(id)arg0 ;
-(void)_unregisterForKVO;
-(void)_update;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif