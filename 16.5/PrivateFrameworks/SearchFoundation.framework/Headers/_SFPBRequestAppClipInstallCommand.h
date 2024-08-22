// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBREQUESTAPPCLIPINSTALLCOMMAND_H
#define _SFPBREQUESTAPPCLIPINSTALLCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBRequestAppClipInstallCommand, NSSecureCoding;


#import "_SFPBURL.h"

@interface _SFPBRequestAppClipInstallCommand : PBCodable <_SFPBRequestAppClipInstallCommand, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif