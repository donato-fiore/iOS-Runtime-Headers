// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDTHEMEBITSOURCE_H
#define TDTHEMEBITSOURCE_H

@class NSManagedObject, NSSet, NSString;



@interface TDThemeBitSource : NSManagedObject

@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSString *path;


-(id)fileURLWithDocument:(id)arg0 ;
-(id)name;
-(void)setName:(id)arg0 ;


@end


#endif