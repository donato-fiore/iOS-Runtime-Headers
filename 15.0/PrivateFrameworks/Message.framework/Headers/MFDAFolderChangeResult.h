// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDAFOLDERCHANGERESULT_H
#define MFDAFOLDERCHANGERESULT_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface MFDAFolderChangeResult : NSObject

@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *folderID; // ivar: _folderID
@property (readonly) NSString *folderName; // ivar: _folderName
@property (readonly) NSInteger statusCode; // ivar: _statusCode


-(BOOL)wasSuccessful;
-(id)description;
-(id)initWithStatusCode:(NSInteger)arg0 error:(id)arg1 folderID:(id)arg2 folderName:(id)arg3 ;


@end


#endif