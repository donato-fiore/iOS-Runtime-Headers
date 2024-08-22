// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HISTORYTABLEVIEWCELLMODEL_H
#define HISTORYTABLEVIEWCELLMODEL_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface HistoryTableViewCellModel : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)urlForHistoryItem:(id)arg0 ;
-(id)init;
-(id)initWithHistoryItem:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 url:(id)arg2 identifier:(id)arg3 ;


@end


#endif