// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCWATCHLISTADDDEFAULTSYMBOLSCOMMAND_H
#define SCWATCHLISTADDDEFAULTSYMBOLSCOMMAND_H

@class NSString, NSArray;
@protocol SCKZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCKZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deferUpload; // ivar: _deferUpload
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *symbols; // ivar: _symbols


+(BOOL)supportsSecureCoding;
-(BOOL)shouldDeferUpload;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbols:(id)arg0 deferUpload:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif