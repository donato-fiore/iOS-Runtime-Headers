// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESESSIONPARSEDCONFIGURATIONRESTRICTIONS_H
#define FIGCAPTURESESSIONPARSEDCONFIGURATIONRESTRICTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FigCaptureSessionParsedConfigurationRestrictions : NSObject

@property (readonly, nonatomic) BOOL allowAllConfigurations; // ivar: _allowAllConfigurations
@property (readonly, nonatomic) NSArray *allowedConnectionMediaTypes; // ivar: _allowedConnectionMediaTypes
@property (readonly, nonatomic) NSArray *allowedConnectionMetadataIdentifiers; // ivar: _allowedConnectionMetadataIdentifiers


-(id)initWithAllowedAVMediaTypes:(id)arg0 clientIsNonStandard:(BOOL)arg1 ;
-(id)initWithClientAuditToken:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif