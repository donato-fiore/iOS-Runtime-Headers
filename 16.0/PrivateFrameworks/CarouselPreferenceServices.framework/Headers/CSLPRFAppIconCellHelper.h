// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFAPPICONCELLHELPER_H
#define CSLPRFAPPICONCELLHELPER_H

@class NSMutableDictionary;
@protocol CSLPRFAppIconCellHelperDelegate;

#import <Foundation/Foundation.h>


@interface CSLPRFAppIconCellHelper : NSObject {
    NSMutableDictionary *_outstandingRequests;
}


@property (weak, nonatomic) NSObject<CSLPRFAppIconCellHelperDelegate> *delegate; // ivar: _delegate


-(id)blankIcon;
-(id)fetchLazyIconForSpecifier:(id)arg0 ;
-(id)init;
-(void)didCompleteLoadForIdentifier:(id)arg0 ;
-(void)loadIconForSpecifier:(id)arg0 iconIdentifier:(id)arg1 ;


@end


#endif