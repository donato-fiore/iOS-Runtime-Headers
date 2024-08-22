// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSYMBOLIMAGE_H
#define LNSYMBOLIMAGE_H

@class NSData, NSString;


#import "LNImage.h"
#import "LNSymbolConfiguration.h"

@interface LNSymbolImage : LNImage

@property (readonly, nonatomic) NSData *configurationData; // ivar: _configurationData
@property (readonly, nonatomic) NSString *platform; // ivar: _platform
@property (readonly, nonatomic) LNSymbolConfiguration *platformAgnosticSymbolConfiguration; // ivar: _platformAgnosticSymbolConfiguration
@property (readonly, nonatomic) NSString *systemName; // ivar: _systemName
@property (readonly, nonatomic) NSData *tintColorData; // ivar: _tintColorData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbolSystemName:(id)arg0 ;
-(id)initWithSymbolSystemName:(id)arg0 tintColorData:(id)arg1 configurationData:(id)arg2 platform:(id)arg3 ;
-(id)initWithSymbolSystemName:(id)arg0 tintColorData:(id)arg1 platformAgnosticConfiguration:(id)arg2 platform:(id)arg3 ;
-(id)proxiedImageCopy;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif