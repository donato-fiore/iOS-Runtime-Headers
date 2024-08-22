// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDTABLESTYLE_H
#define EDTABLESTYLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EDKeyedCollection.h"

@interface EDTableStyle : NSObject <NSCopying>

 {
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}




+(id)tableStyle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)name;
-(id)tableStyleElements;
-(void)setName:(id)arg0 ;


@end


#endif