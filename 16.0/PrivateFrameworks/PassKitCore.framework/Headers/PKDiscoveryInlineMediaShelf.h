// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYINLINEMEDIASHELF_H
#define PKDISCOVERYINLINEMEDIASHELF_H

@class NSString;


#import "PKDiscoveryShelf.h"
#import "PKDiscoveryMedia.h"

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf

@property (readonly, nonatomic) NSString *captionKey; // ivar: _captionKey
@property (readonly, nonatomic) NSInteger displayType; // ivar: _displayType
@property (retain, nonatomic) NSString *localizedCaption; // ivar: _localizedCaption
@property (readonly, nonatomic) PKDiscoveryMedia *media; // ivar: _media


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 ;
-(void)localizeWithBundle:(id)arg0 table:(id)arg1 ;


@end


#endif