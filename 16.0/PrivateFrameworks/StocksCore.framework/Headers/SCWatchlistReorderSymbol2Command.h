// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWATCHLISTREORDERSYMBOL2COMMAND_H
#define SCWATCHLISTREORDERSYMBOL2COMMAND_H

@class NSString;
@protocol SCWZoneCommand;

#import <Foundation/Foundation.h>


@interface SCWatchlistReorderSymbol2Command : NSObject <SCWZoneCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *symbol; // ivar: _symbol
@property (readonly, nonatomic) NSUInteger toIndex; // ivar: _toIndex


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbol:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithZone:(id)arg0 ;


@end


#endif