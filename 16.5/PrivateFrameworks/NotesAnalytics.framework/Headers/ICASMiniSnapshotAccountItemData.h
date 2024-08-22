// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASMINISNAPSHOTACCOUNTITEMDATA_H
#define ICASMINISNAPSHOTACCOUNTITEMDATA_H

@class NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASMiniSnapshotAccountItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *counfOfFolders; // ivar: _counfOfFolders
@property (readonly, nonatomic) NSNumber *countOfAttachments; // ivar: _countOfAttachments
@property (readonly, nonatomic) NSNumber *countofNotes; // ivar: _countofNotes
@property (readonly, nonatomic) NSString *privateAccountID; // ivar: _privateAccountID


+(id)dataName;
-(id)initWithCountofNotes:(id)arg0 counfOfFolders:(id)arg1 countOfAttachments:(id)arg2 privateAccountID:(id)arg3 ;
-(id)toDict;


@end


#endif