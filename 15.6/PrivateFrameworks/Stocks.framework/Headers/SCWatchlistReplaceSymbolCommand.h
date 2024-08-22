// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCWATCHLISTREPLACESYMBOLCOMMAND_H
#define SCWATCHLISTREPLACESYMBOLCOMMAND_H

@class NSString;
@protocol SCKZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *oldSymbol; // ivar: _oldSymbol
@property (readonly, copy, nonatomic) NSString *replacementSymbol; // ivar: _replacementSymbol
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOldSymbol:(id)arg0 replacementSymbol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif