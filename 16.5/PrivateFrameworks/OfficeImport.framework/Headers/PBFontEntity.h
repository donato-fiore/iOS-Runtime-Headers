// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFONTENTITY_H
#define PBFONTENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PBFontEntity : NSObject {
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}




-(id)faceName;
-(id)initWithName:(id)arg0 charSet:(int)arg1 type:(int)arg2 family:(int)arg3 ;
-(int)charSet;
-(int)family;
-(int)type;


@end


#endif