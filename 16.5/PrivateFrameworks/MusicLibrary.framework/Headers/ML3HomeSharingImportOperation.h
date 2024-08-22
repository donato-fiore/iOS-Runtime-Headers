// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3HOMESHARINGIMPORTOPERATION_H
#define ML3HOMESHARINGIMPORTOPERATION_H



#import "ML3DAAPImportOperation.h"

@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation {
    int _playlistNameOrder;
}




-(?)importItemFromDAAPElement;
-(BOOL)_performHomeSharingImportWithTransaction:(id)arg0 ;
-(NSUInteger)importSource;
-(struct shared_ptr<ML3DAAPImportItem> )containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> )arg0 withTrackIds:(struct vector<long long, std::allocator<long long>> )arg1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> )arg2 ;
-(void)main;
-(void)updateImportProgress:(float)arg0 ;


@end


#endif