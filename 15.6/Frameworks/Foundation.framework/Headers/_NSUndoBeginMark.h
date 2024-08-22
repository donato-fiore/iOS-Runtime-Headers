// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSUNDOBEGINMARK_H
#define _NSUNDOBEGINMARK_H

@class NSUndoObject;



@interface _NSUndoBeginMark : NSUndoObject {
    id *_groupIdentifier;
    BOOL _isDiscardable;
}




-(BOOL)isBeginMark;
-(BOOL)isDiscardable;
-(id)description;
-(id)groupIdentifier;
-(void)dealloc;
-(void)setDiscardable:(BOOL)arg0 ;
-(void)setGroupIdentifier:(id)arg0 ;


@end


#endif