// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFILTERCLASSDESCRIPTION_H
#define PBFILTERCLASSDESCRIPTION_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PBFilterClassDescription : NSObject {
    NSDictionary *_attributes;
    NSArray *_inputKeys;
}




+(id)classDescriptionForClass:(Class)arg0 ;
-(id)attributes;
-(id)initWithClass:(Class)arg0 ;
-(id)inputKeys;


@end


#endif