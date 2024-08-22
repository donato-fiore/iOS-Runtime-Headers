// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWWATCHLISTREORDERALLSYMBOLSINWATCHLISTCOMMAND_H
#define SCWWATCHLISTREORDERALLSYMBOLSINWATCHLISTCOMMAND_H

@class NSString, NSOrderedSet;
@protocol SCWZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWWatchlistReorderAllSymbolsInWatchlistCommand : NSObject <SCWZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSOrderedSet *symbols; // ivar: _symbols
@property (readonly, copy, nonatomic) NSString *watchlistIdentifier; // ivar: _watchlistIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbols:(id)arg0 watchlistIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif