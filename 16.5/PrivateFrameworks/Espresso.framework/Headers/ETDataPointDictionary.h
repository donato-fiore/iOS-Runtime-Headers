// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETDATAPOINTDICTIONARY_H
#define ETDATAPOINTDICTIONARY_H


#import <Foundation/Foundation.h>


@interface ETDataPointDictionary : NSObject {
    map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> _image_buffers;
    map<std::string, float_buffer_t, std::less<std::string>, std::allocator<std::pair<const std::string, float_buffer_t>>> _float_buffers;
}


@property ? float_buffers;
@property ? image_buffers;


-(*float)dataForKey:(id)arg0 error:(*id)arg1 ;
-(id)dataArrayForKey:(id)arg0 error:(*id)arg1 ;


@end


#endif