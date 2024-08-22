// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLGOOGLELEGACYTOKENMIGRATIONRESPONSE_H
#define SLGOOGLELEGACYTOKENMIGRATIONRESPONSE_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface SLGoogleLegacyTokenMigrationResponse : NSObject

@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *responseBody; // ivar: _responseBody
@property (readonly) NSInteger statusCode; // ivar: _statusCode


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif