// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCWATCHLISTADDSYMBOLSCOMMAND_H
#define SCWATCHLISTADDSYMBOLSCOMMAND_H

@class NSString, NSArray;
@protocol SCKZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWatchlistAddSymbolsCommand : NSObject <SCKZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *symbols; // ivar: _symbols


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbols:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif