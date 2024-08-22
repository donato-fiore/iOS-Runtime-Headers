// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDAPPEARANCE_H
#define TDAPPEARANCE_H

@class NSManagedObject, NSString;



@interface TDAppearance : NSManagedObject {
    NSString *_name;
    unsigned short _identifier;
}


@property (nonatomic) unsigned short identifier;
@property (copy, nonatomic) NSString *name;




@end


#endif