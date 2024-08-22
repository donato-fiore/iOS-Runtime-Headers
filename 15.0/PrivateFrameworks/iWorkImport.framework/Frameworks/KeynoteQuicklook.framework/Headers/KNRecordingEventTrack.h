// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNRECORDINGEVENTTRACK_H
#define KNRECORDINGEVENTTRACK_H

@class TSPObject, NSArray, NSString;



@interface KNRecordingEventTrack : TSPObject

@property (readonly, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)description;
-(id)eventTrackByReplacingSegmentAfterTime:(CGFloat)arg0 withEventTrack:(id)arg1 ;
-(id)initWithContext:(id)arg0 type:(id)arg1 events:(id)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_slideNodeWasAddedToOrRemovedFromDocument;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)slideNodeWasAddedToDocument:(id)arg0 ;
-(void)slideNodeWillBeRemovedFromDocument:(id)arg0 ;


@end


#endif