// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSERVICEOBJECT_H
#define WBSHISTORYSERVICEOBJECT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceObject : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger databaseID; // ivar: _databaseID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatabaseID:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif