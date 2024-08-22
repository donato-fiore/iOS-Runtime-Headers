// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCMUTABLECLOUDSYNCVERSIONS_H
#define BCMUTABLECLOUDSYNCVERSIONS_H

@class NSString, NSPersistentHistoryToken;
@protocol BCCloudSyncVersions, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCMutableCloudSyncVersions : NSObject <BCCloudSyncVersions, NSSecureCoding>



@property (nonatomic) NSInteger cloudVersion; // ivar: _cloudVersion
@property (copy, nonatomic) NSString *dataType; // ivar: _dataType
@property (copy, nonatomic) NSPersistentHistoryToken *historyToken; // ivar: _historyToken
@property (nonatomic) NSInteger historyTokenOffset; // ivar: _historyTokenOffset
@property (nonatomic) NSInteger localVersion; // ivar: _localVersion
@property (nonatomic) NSInteger syncVersion; // ivar: _syncVersion


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCloudSyncVersions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif