// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3HOMESHARINGIMPORTOPERATION_H
#define ML3HOMESHARINGIMPORTOPERATION_H



#import "ML3DAAPImportOperation.h"

@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation {
    int _playlistNameOrder;
}




-(?)containerImportItemFromDAAPElement:(?)arg0 withTrackIdstrackPersonIdentifiers;
-(BOOL)_performHomeSharingImportWithTransaction:(id)arg0 ;
-(NSUInteger)importSource;
-(struct shared_ptr<ML3DAAPImportItem> )importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(void)main;
-(void)updateImportProgress:(float)arg0 ;


@end


#endif