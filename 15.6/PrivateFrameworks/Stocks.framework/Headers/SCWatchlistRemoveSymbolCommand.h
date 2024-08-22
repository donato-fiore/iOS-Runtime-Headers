// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCWATCHLISTREMOVESYMBOLCOMMAND_H
#define SCWATCHLISTREMOVESYMBOLCOMMAND_H

@class NSString;
@protocol SCKZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWatchlistRemoveSymbolCommand : NSObject <SCKZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *symbol; // ivar: _symbol


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbol:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif