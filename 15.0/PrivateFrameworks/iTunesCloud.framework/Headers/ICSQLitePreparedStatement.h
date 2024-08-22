// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSQLITEPREPAREDSTATEMENT_H
#define ICSQLITEPREPAREDSTATEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICSQLitePreparedStatement : NSObject

@property (readonly, copy, nonatomic) NSString *SQL; // ivar: _SQL
@property (readonly, nonatomic) *void connectionPointer; // ivar: _connectionPointer


-(id)initWithConnection:(*void)arg0 SQL:(id)arg1 ;


@end


#endif