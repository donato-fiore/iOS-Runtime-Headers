// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSTANDINCAPTIONINFO_H
#define TSDSTANDINCAPTIONINFO_H

@class TSPObject;



@interface TSDStandinCaptionInfo : TSPObject



+(BOOL)needsObjectUUID;
-(id)copyWithContext:(id)arg0 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif