// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLGOOGLELEGACYTOKENMIGRATIONTOKENRESPONSE_H
#define SLGOOGLELEGACYTOKENMIGRATIONTOKENRESPONSE_H

@class NSString;


#import "SLGoogleLegacyTokenMigrationResponse.h"

@interface SLGoogleLegacyTokenMigrationTokenResponse : SLGoogleLegacyTokenMigrationResponse

@property (readonly) NSString *errorMessage; // ivar: _errorMessage
@property (readonly) NSString *token; // ivar: _token


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif