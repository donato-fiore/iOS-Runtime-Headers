// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCREDENTIALMETADATATABLECONTROLLER_H
#define PKPAYMENTCREDENTIALMETADATATABLECONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKPaymentCredentialMetadataTableController : NSObject {
    NSArray *_metadata;
    NSInteger _setupContext;
    NSInteger _cellStyle;
}




-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(id)cellForRowAtIndexPath:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 setupContext:(NSInteger)arg1 cellStyle:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(void)willDisplayCell:(id)arg0 forRowAtIndexPath:(id)arg1 ;


@end


#endif