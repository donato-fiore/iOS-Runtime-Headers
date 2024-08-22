// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCREDENTIALMETADATATABLECONTROLLER_H
#define PKPAYMENTCREDENTIALMETADATATABLECONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface PKPaymentCredentialMetadataTableController : NSObject <UITableViewDelegate, UITableViewDataSource>

 {
    NSArray *_metadata;
    NSInteger _setupContext;
    NSInteger _cellStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithMetadata:(id)arg0 setupContext:(NSInteger)arg1 cellStyle:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif