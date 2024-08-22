// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURCHASEHISTORYQUERYSORTOPTION_H
#define ASDPURCHASEHISTORYQUERYSORTOPTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding>

 {
    BOOL _ascending;
    NSString *_name;
}


@property (readonly) BOOL ascending;
@property (readonly) NSString *name;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ascending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif