// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSIDECARINSERTMENUITEM_H
#define ICSIDECARINSERTMENUITEM_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface ICSidecarInsertMenuItem : NSObject {
    ? type;
    ? data;
}


@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *type;


-(id)init;
-(id)initWithType:(id)arg0 data:(id)arg1 ;


@end


#endif