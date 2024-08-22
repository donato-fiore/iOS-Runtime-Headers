// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMINTERNALMESSAGEID_H
#define EMINTERNALMESSAGEID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EMInternalMessageID : NSObject

@property (readonly, nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID


-(id)initWithDatabaseID:(NSInteger)arg0 externalID:(id)arg1 ;


@end


#endif