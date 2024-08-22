// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSECTION_H
#define CNCONTACTSECTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNContactSection : NSObject <NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *sortKey; // ivar: _sortKey
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif