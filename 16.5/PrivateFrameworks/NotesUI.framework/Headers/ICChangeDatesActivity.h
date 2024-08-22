// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCHANGEDATESACTIVITY_H
#define ICCHANGEDATESACTIVITY_H

@class UIActivity;



@interface ICChangeDatesActivity : UIActivity

@property (retain, nonatomic) id *representedObject; // ivar: _representedObject
@property (nonatomic) unsigned char type; // ivar: _type


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithObject:(id)arg0 activityType:(unsigned char)arg1 ;
-(void)setCreationDateForAttachmentObject:(id)arg0 ;
-(void)setCreationDateForNoteObject:(id)arg0 ;
-(void)setModificationDateForAttachmentObject:(id)arg0 ;
-(void)setModificationDateForNoteObject:(id)arg0 ;


@end


#endif