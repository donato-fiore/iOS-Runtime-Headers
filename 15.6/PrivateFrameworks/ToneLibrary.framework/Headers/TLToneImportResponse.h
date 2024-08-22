// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLTONEIMPORTRESPONSE_H
#define TLTONEIMPORTRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TLToneImportResponse : NSObject

@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier


-(id)description;
-(id)initWithStatusCode:(NSInteger)arg0 toneIdentifier:(id)arg1 ;


@end


#endif