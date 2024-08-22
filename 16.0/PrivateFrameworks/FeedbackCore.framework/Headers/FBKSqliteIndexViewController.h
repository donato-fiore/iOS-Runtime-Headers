// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKSQLITEINDEXVIEWCONTROLLER_H
#define FBKSQLITEINDEXVIEWCONTROLLER_H

@class UITableViewController, NSURL, NSString, NSArray;
@protocol UIDocumentInteractionControllerDelegate, UITableViewDelegate, UITableViewDataSource;


#import "FBKSqliteReader.h"

@interface FBKSqliteIndexViewController : UITableViewController <UIDocumentInteractionControllerDelegate, UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) NSURL *dbUrl; // ivar: _dbUrl
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) FBKSqliteReader *reader; // ivar: _reader
@property (readonly) Class superclass;
@property (retain) NSArray *tableNames; // ivar: _tableNames


+(BOOL)canDisplayExtension:(id)arg0 strict:(BOOL)arg1 ;
+(BOOL)canDisplayURL:(id)arg0 ;
+(id)dbUrlForMetadataUrl:(id)arg0 ;
+(id)removeWalShm:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg0 ;
-(id)documentInteractionControllerViewForPreview:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGRect )documentInteractionControllerRectForPreview:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)documentInteractionControllerDidEndPreview:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif